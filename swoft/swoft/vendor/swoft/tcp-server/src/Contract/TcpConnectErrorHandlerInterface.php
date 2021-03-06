<?php declare(strict_types=1);

namespace Swoft\Tcp\Server\Contract;

use Swoft\Error\Contract\ErrorHandlerInterface;
use Throwable;

/**
 * Class TcpConnectErrorHandlerInterface
 *
 * @since 2.0.3
 */
interface TcpConnectErrorHandlerInterface extends ErrorHandlerInterface
{
    /**
     * @param Throwable $e
     * @param int       $fd
     */
    public function handle(Throwable $e, int $fd): void;
}
